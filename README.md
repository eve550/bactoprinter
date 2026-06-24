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


### Next version
Check the refactored next version in the dev branch.
