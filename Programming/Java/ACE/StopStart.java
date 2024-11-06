//JS 


import com.ibm.integration.admin.proxy.IntegrationNodeProxy;
import com.ibm.integration.admin.proxy.IntegrationServerProxy;
import com.ibm.integration.admin.proxy.ApplicationProxy;
import com.ibm.integration.admin.proxy.MessageFlowProxy;
import com.ibm.integration.admin.proxy.RemoteIntegrationNodeConnectionParameters;
import com.ibm.integration.admin.proxy.AdminException;

public class StopStart {

    private IntegrationNodeProxy integrationNodeProxy;

    // Constructor to initialize the connection to the Integration Node
    public MessageFlowManager(String host, int port, String username, String password) throws AdminException {
        RemoteIntegrationNodeConnectionParameters connectionParams =
                new RemoteIntegrationNodeConnectionParameters(host, port);
        connectionParams.setUsername(username);
        connectionParams.setPassword(password);

        this.integrationNodeProxy = new IntegrationNodeProxy(connectionParams);
    }

    // Method to start a message flow under a specific application
    public void startMessageFlow(String serverName, String appName, String flowName) throws AdminException {
        IntegrationServerProxy serverProxy = integrationNodeProxy.getIntegrationServerByName(serverName);
        ApplicationProxy appProxy = serverProxy.getApplicationByName(appName);
        MessageFlowProxy flowProxy = appProxy.getMessageFlowByName(flowName);
        flowProxy.start();
        System.out.println("Message flow " + flowName + " started successfully.");
    }

    // Method to stop a message flow under a specific application
    public void stopMessageFlow(String serverName, String appName, String flowName) throws AdminException {
        IntegrationServerProxy serverProxy = integrationNodeProxy.getIntegrationServerByName(serverName);
        ApplicationProxy appProxy = serverProxy.getApplicationByName(appName);
        MessageFlowProxy flowProxy = appProxy.getMessageFlowByName(flowName);
        flowProxy.stop();
        System.out.println("Message flow " + flowName + " stopped successfully.");
    }

    // Main method to demonstrate start and stop functionality
    public static void main(String[] args) {
        try {
            // Replace with your ACE integration node connection details
            String host = "trymadi.cusa.canon.com";
            int port = 5421;  // Default ACE node port
            String username = "loginuser";
            String password = "loginpwd";
            
            // Replace with your target server, application, and message flow names
            String serverName = "egname";
            String appName = "appname";
            String flowName = "flowname";

            MessageFlowManager manager = new MessageFlowManager(host, port, username, password);

            // Stop the message flow
            manager.stopMessageFlow(serverName, appName, flowName);

            // Start the message flow
            //manager.startMessageFlow(serverName, appName, flowName);

        } catch (AdminException e) {
            System.err.println("An error occurred while managing the message flow: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
