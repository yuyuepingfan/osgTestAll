#include <QtCore/QCoreApplication>
#pragma once
#ifdef  _DEBUG
#pragma comment(lib, "osgd.lib")
#pragma comment(lib, "osgDBd.lib")
#pragma comment(lib, "osgViewerd.lib")
#pragma comment(lib, "OpenThreadsd.lib")
#else
#endif //  DEBUG

#include <osgViewer/Viewer>
#include <osgDB/ReadFile>



int main(int argc, char *argv[])
{
	osgViewer::Viewer viewer;
	osg::Node * node = new osg::Node;
	node = osgDB::readNodeFile("C:/Users/yuyue/Downloads/OpenSceneGraph-Data-3.4.0/OpenSceneGraph-Data/cow.osg");
	viewer.setSceneData(node);
	return viewer.run();
}
