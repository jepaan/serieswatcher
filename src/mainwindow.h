/*
 * Copyright (C) 2010 Corentin Chary <corentin.chary@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef MAINWINDOW_H
# define MAINWINDOW_H

#include <QtGui/QMainWindow>

#include "ui_mainwindow.h"

class SearchDialog;
class WorkerThread;
class QNetworkAccessManager;
class UpdateProgressDialog;

class MainWindow : public QMainWindow, private Ui_mainWindow {
  Q_OBJECT
public:
  MainWindow();
  ~MainWindow();

private slots:
  void addShow();
  void addShow(const QString & name, qint64 id);
  void about();
  void aboutQt();

private:
  UpdateProgressDialog *progress;
  SearchDialog *searchDialog;
  QNetworkAccessManager *manager;
  WorkerThread *thread;
};

#endif
