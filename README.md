# PCAP Finder App
> [!WARNING]
> It is needed to have installed NPCAP or WinPCAP and have PCAP SDK!
This app is intended only for MS Windows (Win32 API) and lists all available devices. In the list is included name with a description. Name is used to open pcap adapter for capturing or sending raw frames/packets from available network adapters. Decription is listed to identify what adapter wit more friendly information.

For PCAP SDK to be found by FindPCAP.cmake it is neccesary to create eviroment variable called PCAPDIR and as value needs to be specified path to the PCAP installation directory.

> [!NOTE]
> Same principal apply for Linux or MAC but little bit differently.