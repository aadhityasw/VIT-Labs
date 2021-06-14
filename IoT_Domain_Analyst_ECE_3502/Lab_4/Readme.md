# Lab 4


## List of Programs


### 1. [RSS Feed Parsing](./News.json)

* To Retrieve and display the latest News using the outlet’s RSS feed and parsing through it and displaying the News in an interactive format.
* We use the feed parser node of the node red, to retrieve the news from the RSS feed link that we give it, and parse through the retrieved XML document and give out the resultant News headline and the content.
* We use an Audio Out Node which is a part of the Node red Dashboard to use the Text to Speech feature and speak out the news.
* We use a Text Output node to display the news in the UI Dashboard of the Node Red.
* We use the Debug node to display the News content parsed in the debug window.
* Stage 1 : Feed Parser Node
This node takes in the link to a realtime RSS feed provider, and also a refresh time which it will use to refresh the RSS feed link every time interval provided. This is how the latest news will always be fetched and displayed in out node-red flow.
* Stage 2 : Output Nodes
For this flow, we have 3 nodes which will provide the output of the feed parser node which is essentially the latest news in three different places and formats.
The Debug node displays the latest news in the debug window, while the audio out node gives out the news in an audio format, and the text node displays the news in the UI Dashboard of the Node-Red.
