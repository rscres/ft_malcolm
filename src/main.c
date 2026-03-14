#include "../malcolm.h"

int main() {
    int sockfd;

    if (sockfd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ARP)) < 0) {
        perror("socket failed");
        exit(-1);
    }

    
    
    return (0);
}