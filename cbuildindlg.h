#ifndef CBUILDINDLG_H
#define CBUILDINDLG_H

#include <QDialog>
#include <QtWidgets>
class CBuildinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuildinDlg(QWidget *parent = 0);
    ~CBuildinDlg();

private:
    QTextEdit*   displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILDINDLG_H
