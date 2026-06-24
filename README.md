## Enderscopy


### For a Raspberry Pi 4 with Debian Bookworm OS (Released 2024-07-04):
### Installation
Create an 'enderscope' virtual environment to work in:

```
cd ~
python3 -m venv --system-site-packages enderscope
source enderscope/bin/activate
pip install pyserial jupyter ipywidgets numpy matplotlib
jupyter notebook
```
Clone this repo and open the 'demo' notebook in JupyterLab. 

### Usage

```
cd ~
source enderscope/bin/activate
jupyter notebook
```
### For Windows
### Installation

pip installation

```
py -m ensurepip –upgrade
```
Create an 'enderscope' virtual environment to work in:

```
python3 -m venv --system-site-packages enderscope
.\enderscope\Scripts\Activate.ps1
pip install pyserial jupyter ipywidgets numpy matplotlib
jupyter notebook
```

### Note : Pay attention to the index of the ports[] list. 
An error message may appear (List Index Out of Range);
In this case, refer to "Finding the Device-Port Name Mapping" below.

### Finding the Device-Port Name Mapping
### To get a list of connected and powered-on devices : 
Enter the following command in the terminal: 
```
python -m serial.tools.list_ports
```
(ports[0] corresponds to the first port in the list…)

### To find the specific port name of a single device
Power on/Connect a single device and execute the following line of code in the terminal: 

```
python -m serial.tools.list_ports
```
This will return the name of the connected and powered-on port only.


### Next version
Check the refactored next version in the dev branch.
