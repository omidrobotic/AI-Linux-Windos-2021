# AI-Linux-Windos-2021
You can run this project in both Linux and Windows operating systems. fallow the instruction bellow to get set everything up correctly.

### Linux

1. First of all you need install **googleProtobuf** from [here](https://github.com/protocolbuffers/protobuf).
2. Then clone this repository using the command bellow.
```
git clone https://github.com/omidrobotic/AI-Linux-Windos-2021.git
```
3. We made a bash file which will do some setups for each ER-force or Grsim simulator just to make things easier for users. Before running this bash file you need to give it a permission of 777. so run these commands.
```
cd AI-Linux-Windos-2021/omid
sudo chmod 777 auto.sh
```
4. It is required to install **OpenGL** as well. So install it like this. You can use [this link](https://user.xmission.com/~nate/glut.html) for more info
```
sudo apt update
sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev
```
5. There is two way for running this project. Using two computers (one for simulator and one for AI) and connect them with LAN cable or using one computer (for both simulator and AI). We need to set the IP address of simulator in our AI project. To find the IP address use these commands. (local IP addresses is like 192.168.X.X)
  * If using one system:
    ```
    hostname -I 
    ```
  * If using tow systems:
    ```
    ifconfig
    ```
6. Now that you found your local IP Address go to `omid/ai/switch.h` and set IP address as shown bellow.
```
#define GROUP_ADDR_SEND_GRSIM_COMMAND	"192.168.0.2"
```
7. Make sure you have set everything correctly in `omid/ai/switch.h` for [Grsim](https://github.com/RoboCup-SSL/grSim), Erforce or Real. Also set the devision as well.
```
#define SEND_COMMANDS_TO_ROBOTS 2	 // 2: ER-force  1: REAL  0: Grsim
#define DIVISION 2	                 // 1: A  2: B  3: OmidReal
```
### Run Project
Make sure you are running the simulator (Grsim or ER-force) or vision. Then run the bash file in `omid/` directory. Enter `y` for Grsim and `n` for ER-force.
```
./auto.sh
```
Then go to `omid/build` and build the project using this command.
```
cd build
make
```
Finaly, run `omid` file inside `omid/build` using the command bellow. 
```
./omid
```
It's better to use **[CLion](https://www.jetbrains.com/help/clion/installation-guide.html#snap)** as a **Compiler**.
```
sudo snap install clion --classic
```
Have fun :)

### Build
 ```
 cd ~/AI-Linux-Windos-2021/omid
 ./auto.sh
 cd build
 make
 ```
### Run
 ```
 cd ~/AI-Linux-Windos-2021/omid/build
 ./omid
 ```

  * ### IN Linux
  https://www.youtube.com/watch?v=ES_GI-lmhEU
  https://www.youtube.com/watch?v=8_X5Iq9niDE

see this link for Vision PCI cameras and install drivers: 
 https://docs.oracle.com/cd/E19407-01/820-7898-11/z40001c91006831.html

## Recently Added Tasks
- [X] Make GUI thread optional. 
- [X] System IP address can be detected automaticaly.
- [ ] Designing new GUI with QT.
- [ ] Optimizing socket code (which I think is working fine!!).
- [ ] Prepare codes to go on docker.
