# Binary Exploitation Workshop Setup Guide

This is a guide that walks you through setting up a **environment** for this workshop. Use VM Software and try to avoids using WSL. You'll install essential tools for debugging, reversing, and exploiting binaries.

---

##  1. Install VM Software

### Step 1: Choose a Virtualization Software

**Option 1: VMware**

* Download: [VMware Workstation Player](https://www.vmware.com/products/workstation-player.html) (Windows/Linux) or [VMware Fusion](https://www.vmware.com/products/fusion.html) (Mac)

**Option 2: VirtualBox**

* Download: [VirtualBox](https://www.virtualbox.org/wiki/Downloads) (Windows/macOS/Linux)

### Step 2: Enable Virtualization in BIOS

Ensure Intel VT-x or AMD-V is enabled.

### Step 3: Download Ubuntu ISO

* [Ubuntu 22.04/24.04 LTS Desktop ISO](https://ubuntu.com/download/desktop)

---

## 🛠️ 2. Creating & Installing Ubuntu VM

* **RAM**: 4 GB minimum (8 GB recommended)
* **Disk**: 25 GB minimum (30–50 GB recommended)
- Install the ubuntu image on the VM

---

## 3. Initial Ubuntu Setup

### Update & Upgrade Packages

```bash
sudo apt update && sudo apt upgrade -y
```

---

## 🧰 4. Installing Required Tools

### 4.1 GCC, GDB, and Development Tools

```bash
sudo apt install build-essential gdb binutils
```

### 4.2 Text Editor (Choose one)

* **nano** (pre-installed): `nano <file>`
* **vim**: `sudo apt install vim`
* **VS Code**: https://code.visualstudio.com/download

### 4.3 Python 3 and pip

```bash
sudo apt install python3-pip python3-dev libssl-dev libffi-dev git
python3 -m pip install --upgrade pip
```

### 4.4 Pwntools

```bash
python3 -m pip install --upgrade pwntools
```

### 4.5 GDB Pwndbg Plugin

```bash
git clone https://github.com/pwndbg/pwndbg.git
cd pwndbg
./setup.sh
```

### 4.6 ROPgadget

```bash
python3 -m pip install ROPgadget
```

### 4.7 Confirm Installations

```bash
gcc --version
gdb --version
objdump --version
python3 --version
ROPgadget --help
```

---

## Environment Checklist

You should have:

- [ ] GCC for compiling 
- [ ] GDB + Pwndbg  debugging
- [ ] Python + Pwntools for exploit scripting
- [ ] ROPgadget + objdump for binary inspection
- [ ] nano/vim/VSCode for code editing

