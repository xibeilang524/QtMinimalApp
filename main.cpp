﻿//---------------------------------------------------------------------------
// Include
//---------------------------------------------------------------------------

#include <QApplication>
#include "Application.h"
#include "ExceptionHandler.h"
//---------------------------------------------------------------------------
// main
//---------------------------------------------------------------------------

int main(int argc, char *argv[]) {
  namespace NSApp = NSApplication;
  QApplication QApp(argc, argv);
  try {
    NSApp::CApplication Application;
    QApp.exec();
  } catch(std::exception& Exception) {
    NSApp::CExceptionHandler React(Exception);
  } catch(...) {
    NSApp::CExceptionHandler React;
  }
  return 0;
}
//---------------------------------------------------------------------------
