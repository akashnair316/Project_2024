
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

- Installation
```bash
sudo apt install avr-gcc avr-libc avrdude
sudo apt install gcc-avr
```

- Use avr-gcc and avr dude for compiling and flashing
```bash
avr-gcc -mmcu=atmega2560 -Os -o Project_03.elf Project_03.c
avr-objcopy -O ihex Project_03.elf Project_03.hex
sudo avrdude -c wiring -p atmega2560 -P /dev/ttyACM0 -b 115200 -D -U flash:w:Project_03.hex:a
```
