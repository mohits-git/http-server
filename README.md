# HTTP Server in C++
I built an http-server in c++, completely with the help(followed along) of an medium articale [Link by Osamudiamen Azamegbe](https://osasazamegbe.medium.com/showing-building-an-http-server-from-scratch-in-c-2da7c0db6cb7), 

### Tech Used:
- C++
- Docker
- CMake

### Building and Running
1. Clone the repo
 ```sh
 git clone https://github.com/OsasAzamegbe/http-server.git
 ```
2. navigate to the project folder *__http-server/__* and build the docker image
 ```sh
 docker-compose build
 ```
3. start the server
 ```sh
 docker-compose up
 ```

After you are done, bring down the docker in another terminal:
```sh
   docker-compose down
   ```  
