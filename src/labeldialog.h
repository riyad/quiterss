/* ============================================================
* QuiteRSS is a open-source cross-platform RSS/Atom news feeds reader
* Copyright (C) 2011-2019 QuiteRSS Team <quiterssteam@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef NEWSLABELDIALOG_H
#define NEWSLABELDIALOG_H

#include "dialog.h"
#include "lineedit.h"

class LabelDialog : public Dialog
{
  Q_OBJECT
public:
  explicit LabelDialog(QWidget *parent);

  void loadData();

  LineEdit *nameEdit_;
  QIcon icon_;
  QString colorTextStr_;
  QString colorBgStr_;

private slots:
  void nameEditChanged(const QString&);
  void selectIcon(QAction *action);
  void loadIcon();
  void defaultColorText();
  void selectColorText();
  void defaultColorBg();
  void selectColorBg();

private:
  QToolButton *iconButton_;
  QToolButton *colorTextButton_;
  QToolButton *colorBgButton_;

};

#endif // NEWSLABELDIALOG_H
