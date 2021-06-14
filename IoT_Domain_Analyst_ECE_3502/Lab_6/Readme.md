# Lab 6


## List of Programs


### 1. [Data visualization with ThingsBoard](./thingsboard.json)

* Utilize Node red to interact with ThingsBoard to send information to it to form useful widgets for weather conditions, etc.
* We create an account in the Things Board, create a new device there to use.
* We use appropriate Node red nodes to collect the required informations, format it and send them to the ThingsBoard device.
* This device forms widgets using the details passed from the node red flow, and we can create and choose the widget of our choice to implement from there.
* Create a new ThingsBoard Device
Here we sign up for a ThingsBoard account and click “devices” from the left menus. Here we get a list of all the configured devices. Here we create a new device for this experiment called as “lab6”.
* After creating the device, we can notice that this has been added to the list of devices.
* Copy the Device Credentials
Now that we have created a new device, we then click on the device and then copy its “access token”. On clicking the device from the list, a window similar to this appears :
This copied access token would have to be entered in a node red flow node to establish the connection. This will be discussed in a later stage.
* Inject Node
We now return back to the Node red, and create anew flow. We then add a new inject node, and configure its payload to be of JSON type and then feed in the parameters and the values that we need to pass to the dashboard.
* HTTP Request Node
We will link a HTTP request node to the “inject node” placed in the previous stage. This node is used to send POST requests to the ThingsBoard with the request containing the required parameters and values in JSON format. The configuration of this node looks as follows :
We will be utilising the device access code copied from stage 2, and insert it into the following template link to give the url endpoint where the POST request is to be sent.
`URL Endpoint : http://demo.thingsboard.io/api/v1/<access_token>/telemetry`
* Stage 5 : Debug Node
We use the Debug node to display any details that the ThingsBoard might return as a response to the POST request sent to its servers. If everything goes as planned, this would just display an empty string in the debug window. Its configurations are standard.
* After deploying the flow, we inject the node to trigger the flow, as specified we get an empty string in the debug window which indicates that the POST request did not yield any response.
We can take a look at the ThingsBoard page to view the latest details it has received through POST requests in its API. ThingsBoard is a house of many visualisations and widgets which can be used anywhere and for any purpose.
* Thus we conclude that the ThingsBoard is a house of many visualisations and can thus be used for many purposes, we have in this scenario, used to send the Whether details like the temperature, humidity and the atmospheric pressure from the node red dashboard which have been received by the ThingsBoard API and have provided many useful, interactive, informative and beautiful widgets which can represent real time information in the way as described to develop a real time dashboard.
We have used ThingsBoard and NodeRed to develop an application for Real Time Weather display using concepts of IoT.
