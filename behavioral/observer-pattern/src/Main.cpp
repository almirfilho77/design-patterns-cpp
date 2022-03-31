#include <iostream>
#include <string>

#include "ChatGroup.h"
#include "ChatUser.h"
#include "SendMessageCommand.h"

int main(int argc, const char *argv[])
{
    ChatGroup *groupDM = new ChatGroup("Dunder Mifflin");
    ChatGroup *groupDM_bosses = new ChatGroup("Dunder Mifflin bosses");

    ChatUser *user1 = new ChatUser("Jim");
    ChatUser *user2 = new ChatUser("Pam");
    ChatUser *user3 = new ChatUser("Dwight");
    ChatUser *user4 = new ChatUser("Michael");

    user1->JoinGroup(groupDM);
    user2->JoinGroup(groupDM);
    user3->JoinGroup(groupDM);
    user4->JoinGroup(groupDM);

    user4->SendMessage("Welcome to the group, guys!", groupDM);
    user1->SendMessage("Hey guys!", groupDM);
    user2->SendMessage("Heeeey!", groupDM);

    user3->JoinGroup(groupDM_bosses);
    user4->JoinGroup(groupDM_bosses);

    user1->SendMessage("Hey", groupDM_bosses);
    user3->SendMessage("Hey Michael. That's the bosses group ok?", groupDM_bosses);
    user4->SendMessage("Omg Dwight... I'm leaving...", groupDM_bosses);
    user3->SendMessage("No Michael, wait please!", groupDM_bosses);

    user4->LeaveGroup(groupDM_bosses);
    

    delete user1;
    delete user2;
    delete user3;
    delete user4;
    delete groupDM;
    delete groupDM_bosses;

    return 0;
}