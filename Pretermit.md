# Linux Device Driver

## Environment Setup checks
### multipass utility checks
```bash
multipass list
```
```bash
multipass start primary
```
```bash
ssh ubuntu@10.237.161.23
```
passwd : 1215

```bash
multipass stop --all
multipass delete --all
```

### Remove Multipass & Re-install steps
```bash
sudo snap remove multipass
sudo snap install multipass
multipass list
multipass launch --name ubuntu
multipass info ubuntu
```
### To login into shell
```bash
multipass shell ubuntu
```

#### Inside multipass shell for first time install
```
sudo apt install openssh-server
sudo apt install net-tools
sudo apt install build-essential linux-headers-$(uname -r)
```


#### In Linux to check return status of last executed command
```bash
echo $?
```


