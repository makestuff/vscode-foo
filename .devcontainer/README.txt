# Build the image
docker build --tag makestuff:0.1 .

# Run the image
PROJ=makestuff/vscode-foo  # or something else...
docker run -p 127.0.0.1:8080:8080/tcp --name ${USER}-1 --user vscode -it makestuff:0.1 bash -l -c "cd; if [ ! -e workspace ]; then git clone --recursive https://github.com/${PROJ}.git workspace; fi; cd workspace; ./build.sh Debug -nobuild; code-server ."

# Reconnect
docker start -ai ${USER}-1

# Check available containers
docker ps --all

# Connect
http://localhost:8080

# Destroy container
docker rm --force ${USER}-1
