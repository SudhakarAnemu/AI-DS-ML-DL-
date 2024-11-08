# JS 

Nginix

| S.No | Command | Description |
| ---- | ------- | ----------- |
| 1    |GCP                 |Commands|
| 8    |gcloud auth login|Login to gcp console|
| 9    |gcloud projects list|List out all project ids, shows 3 properties|
| 10   |gcloud auth list|List out active accounts|
| 11   |gcloud config set account `ACCOUNT`|a|
| 12   |gcloud config list project|List projects|
| 13   |gcloud --version|a|
| 14   |gcloud init|Initialize gcloud|
| 15   |gcloud config list|List current configuration|
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |

                                                          
                                                          


gcloud config list project
gcloud config configurations list
gcloud config configurations activate my-default-configuration
gcloud config list
gcloud config configurations describe my-second-configuration
gcloud compute instances list
gcloud compute instances create
gcloud compute instances create my-first-instance-from-gcloud
gcloud compute instances describe my-first-instance-from-gcloud
gcloud compute instances delete my-first-instance-from-gcloud
gcloud compute zones list
gcloud compute regions list
gcloud compute machine-types list
 
gcloud compute machine-types list --filter zone:asia-southeast2-b
gcloud compute machine-types list --filter "zone:(asia-southeast2-b asia-southeast2-c)"
gcloud compute zones list --filter=region:us-west2
gcloud compute zones list --sort-by=region
gcloud compute zones list --sort-by=~region
gcloud compute zones list --uri
gcloud compute regions describe us-west4
 
gcloud compute instance-templates list
gcloud compute instance-templates create instance-template-from-command-line
gcloud compute instance-templates delete instance-template-from-command-line
gcloud compute instance-templates describe my-instance-template-with-custom-image