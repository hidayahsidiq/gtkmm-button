#include <gtkmm/main.h>
#include "helloworld.h"

int main (int argc, char *argv[]){
    Gtk::Main kit(argc, argv);

    HelloWorld helloworld;

    //shows the window and returns when it is closed
    Gtk::Main::run(helloworld);

    return 0;

}