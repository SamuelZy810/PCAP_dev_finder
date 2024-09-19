# PCAP Finder App
> [!WARNING]
> It is need to install NPCAP or WinPCAP and have a PCAP SDK!

This app is intended only for MS Windows (Win32 API) and lists all available devices. In the list is included a name with a description. The name is used to open a pcap adapter for capturing or sending raw frames/packets from available network adapters. A description is listed to identify what adapter with more friendly information.

For the PCAP SDK to be found by FindPCAP.cmake it is necessary to create an environment variable called PCAPDIR and, as a value needs to be specified, the path to the PCAP installation directory.

> [!NOTE]
> Same principal apply for Linux or MAC but little bit differently.