#include "mptabview.h"
#include "mptab.h"
#include <qvector.h>


MPTabView::MPTabView(QWidget *parent) :
    QTabWidget(parent)
{
    setMovable(true);
    setTabsClosable(true);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
}

bool MPTabView::newTab(){
    MPTab *tab = new MPTab;
    addTab(tab,"*New");
    return true;
}

bool MPTabView::openTab(const QString &filename){
    MPTab *tab = new MPTab;
    addTab(tab,filename);

    return true;
}



MPTabView::~MPTabView(){

}
