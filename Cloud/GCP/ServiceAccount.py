#js 


import os
from google.cloud import functions_v2
from google.cloud import functions_v1
from google.cloud import iam_v1
from google.oauth2 import service_account
from datetime import datetime, timedelta

def list_key_expiry(request):
    """Lists the estimated expiration of all keys for a service account.

    Args:
        request (flask.Request): The Flask Request object.

    Returns:
        The response text or any other desired response format.
    """

    # Replace with your service account email
    #service_account_email = "your-service-account@your-project.iam.gserviceaccount.com"
    service_account_email = "s4-sap@jssudeepa.iam.gserviceaccount.com"

    # Create an IAM client
    client = iam_v1.IAMServiceClient()

    # List all keys for the service account
    request = iam_v1.ListServiceAccountKeysRequest(name=service_account_email)
    page_token = None
    while True:
        response = client.list_service_account_keys(request=request, page_token=page_token)
        keys = response.keys

        for key in keys:
            key_creation_time = key.create_time

            # Calculate estimated expiration based on key type
            key_type = key.key_type
            if key_type == "TYPE_GOOGLE_CREDENTIALS_PRIVATE_KEY_TYPE_JSON":
                estimated_expiration = key_creation_time + timedelta(days=730)
            elif key_type == "TYPE_GOOGLE_CREDENTIALS_PRIVATE_KEY_TYPE_PKCS12":
                estimated_expiration = key_creation_time + timedelta(days=1095)
            else:
                print(f"Unsupported key type: {key_type}")
                continue

            time_to_expire = estimated_expiration - datetime.now(tz=datetime.timezone.utc)
            print(f"Key name: {key.name}, Estimated expiration: {estimated_expiration}, Time to expire: {time_to_expire}")

        page_token = response.next_page_token
        if not page_token:
            break

    return "Key expiry information printed to logs"




    ---> Below permisisons re required to run for the new service account. 

    roles/logging.logWriter to runpythonservice@jssudeepa.iam.gserviceaccount.com
roles/artifactregistry.createOnPushWriter to runpythonservice@jssudeepa.iam.gserviceaccount.com
roles/storage.objectAdmin to runpythonservice@jssudeepa.iam.gserviceaccount.com

