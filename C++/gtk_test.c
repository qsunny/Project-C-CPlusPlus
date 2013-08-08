#include <gtk/gtk.h>

int main(int argc,char *argv[]) {
	Gtkwidget *window;
	Gtkwidget *lable;
	char title[]="Test";
	char text[]="This is Test";
	gtk_init(&argc,&argv);
	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),title);
	gtk_widget_set_usize(GTK_WINDOW(window),300,150);
	
	lable=gtk_lable_new(text);
	gtk_container_add(GTK_CONTAINER(window),label);
	gtk_widget_show(window);
	gtk_widget_show(lable);
	gtk_main();
	return 0;
}
