# Node-red Using Docker


## Setup

* Use this line to create the image

```bash
docker run -it -p 1880:1880 -v <path_to_workspace_folder>:/data --name <name_of_container> ghcr.io/aadhityasw/iot-nodered:latest
```
After following through the whole process once, you can also use your own image here in place of `ghcr.io/aadhityasw/iot-nodered:latest`.

The path `path_to_workspace_folder` can be the path to any folder in the host computer. Its path should be stated as the absolute path to the location where we need the setup to exist to copy the files. But this is not required for the execution of the codes available here.
So a simpler command can be :
```bash
docker run -it -p 1880:1880 --name ghcr.io/aadhityasw/iot-nodered:latest
```
This just sets up the image, creates a new container with the name specfied in `<name_of_container>`. It also sets up port forwarding in order for the server to run in that port.


## Running the container


* Use this command to start the container :
```bash
docker start -i <name_of_container>
```


* Go to the url :

```
http://127.0.0.1:1880/
```


* Use this to stop the container :
```bash
docker stop <name_of_container>
```


## Making your own custom image with any changes made


* Commit the container to image with your docker username, so as to save the changes made if any in the container
```bash
docker container commit <name_of_container> <docker_username>/<image_name>
```

* Push this image to dockerhub
```bash
docker push <docker_username>/<image_name>
```
You can use any container registry of your choice, I have provided an example with docker, but there are others including the ones offered by github(ghcr), etc.
