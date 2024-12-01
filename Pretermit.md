
- Clone Arduino CLI
```bash
git clone https://github.com/arduino/arduino-cli.git
git checkout v1.1.1
./install.sh
```

- Update in bashrc and source
```bash
export PATH="/home/akash/Learn/Arduino-CLI-GIT/arduino-cli/bin:$PATH"
```

- Commands
```bash
arduino-cli config init
arduino-cli sketch new Project_01
vim Project_01/Project_01.ino
arduino-cli core update-index
arduino-cli board list
arduino-cli core install arduino:avr
arduino-cli compile --fqbn arduino:avr:mega Project_01
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega Project_01
```
