// Including sys libs
#include <iostream>

// Including pcap libs
#include <pcap.h>

// Including own libs/packages/files

int main(int argc, char ** argv) {
    std::cout << "List of all adapters with name:" << std::endl;

    char deviceError[PCAP_ERRBUF_SIZE];
    pcap_init(PCAP_CHAR_ENC_LOCAL, deviceError);

    pcap_if_t * allDevs = nullptr;

    int devRes = pcap_findalldevs(&allDevs, deviceError);

    pcap_if_t * currDev = allDevs;
    int devCnt = 0;

    if (devRes == 0) {
        while (currDev != nullptr) {
            devCnt ++;
            std::cout << std::endl << "Device no." << devCnt << std::endl << "- Name:        "
            << currDev->name << std::endl << "- Description: " << currDev->description << std::endl;
            currDev = currDev->next;
        }
    }

    pcap_freealldevs(allDevs);

    return 0;
}
