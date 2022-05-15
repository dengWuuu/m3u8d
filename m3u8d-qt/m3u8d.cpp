#include "m3u8d.h"
/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package command-line-arguments */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif

extern __declspec(dllexport) void Go2cppFn_RunDownload(char* in, int inLen, char** out, int* outLen);
extern __declspec(dllexport) void Go2cppFn_GetProgress(char* in, int inLen, char** out, int* outLen);
extern __declspec(dllexport) void Go2cppFn_GetWd(char* in, int inLen, char** out, int* outLen);

#ifdef __cplusplus
}
#endif


RunDownload_Resp RunDownload(RunDownload_Req in0){
	std::string in;
	{
		{
			uint32_t tmp19 = in0.M3u8Url.length();
			char tmp20[4];
			tmp20[0] = (uint32_t(tmp19) >> 24) & 0xFF;
			tmp20[1] = (uint32_t(tmp19) >> 16) & 0xFF;
			tmp20[2] = (uint32_t(tmp19) >> 8) & 0xFF;
			tmp20[3] = (uint32_t(tmp19) >> 0) & 0xFF;
			in.append(tmp20, 4);
			in.append(in0.M3u8Url);
		}
		{
			uint32_t tmp21 = in0.HostType.length();
			char tmp22[4];
			tmp22[0] = (uint32_t(tmp21) >> 24) & 0xFF;
			tmp22[1] = (uint32_t(tmp21) >> 16) & 0xFF;
			tmp22[2] = (uint32_t(tmp21) >> 8) & 0xFF;
			tmp22[3] = (uint32_t(tmp21) >> 0) & 0xFF;
			in.append(tmp22, 4);
			in.append(in0.HostType);
		}
		in.append((char*)(&in0.Insecure), 1);
		{
			uint32_t tmp23 = in0.SaveDir.length();
			char tmp24[4];
			tmp24[0] = (uint32_t(tmp23) >> 24) & 0xFF;
			tmp24[1] = (uint32_t(tmp23) >> 16) & 0xFF;
			tmp24[2] = (uint32_t(tmp23) >> 8) & 0xFF;
			tmp24[3] = (uint32_t(tmp23) >> 0) & 0xFF;
			in.append(tmp24, 4);
			in.append(in0.SaveDir);
		}
		{
			uint32_t tmp25 = in0.FileName.length();
			char tmp26[4];
			tmp26[0] = (uint32_t(tmp25) >> 24) & 0xFF;
			tmp26[1] = (uint32_t(tmp25) >> 16) & 0xFF;
			tmp26[2] = (uint32_t(tmp25) >> 8) & 0xFF;
			tmp26[3] = (uint32_t(tmp25) >> 0) & 0xFF;
			in.append(tmp26, 4);
			in.append(in0.FileName);
		}
		in.append((char*)(&in0.UserFfmpegMerge), 1);
		{
			char tmp27[4];
			tmp27[0] = (uint32_t(in0.SkipTsCountFromHead) >> 24) & 0xFF;
			tmp27[1] = (uint32_t(in0.SkipTsCountFromHead) >> 16) & 0xFF;
			tmp27[2] = (uint32_t(in0.SkipTsCountFromHead) >> 8) & 0xFF;
			tmp27[3] = (uint32_t(in0.SkipTsCountFromHead) >> 0) & 0xFF;
			in.append(tmp27, 4);
		}
	}
	char *out = NULL;
	int outLen = 0;
	Go2cppFn_RunDownload((char *)in.data(), in.length(), &out, &outLen);
	RunDownload_Resp retValue;
	int outIdx = 0;
	{
		{
			uint32_t tmp28 = 0;
			uint32_t tmp29 = uint32_t(uint8_t(out[outIdx+0]) << 24);
			uint32_t tmp30 = uint32_t(uint8_t(out[outIdx+1]) << 16);
			uint32_t tmp31 = uint32_t(uint8_t(out[outIdx+2]) << 8);
			uint32_t tmp32 = uint32_t(uint8_t(out[outIdx+3]) << 0);
			tmp28 = tmp29 | tmp30 | tmp31 | tmp32;
			outIdx+=4;
			retValue.ErrMsg = std::string(out+outIdx, out+outIdx+tmp28);
			outIdx+=tmp28;
		}
		retValue.IsSkipped = (bool) out[outIdx];
		outIdx++;
		{
			uint32_t tmp33 = 0;
			uint32_t tmp34 = uint32_t(uint8_t(out[outIdx+0]) << 24);
			uint32_t tmp35 = uint32_t(uint8_t(out[outIdx+1]) << 16);
			uint32_t tmp36 = uint32_t(uint8_t(out[outIdx+2]) << 8);
			uint32_t tmp37 = uint32_t(uint8_t(out[outIdx+3]) << 0);
			tmp33 = tmp34 | tmp35 | tmp36 | tmp37;
			outIdx+=4;
			retValue.SaveFileTo = std::string(out+outIdx, out+outIdx+tmp33);
			outIdx+=tmp33;
		}
	}
	if (out != NULL) {
		free(out);
	}
	return retValue;
}

int32_t GetProgress(){
	std::string in;
	char *out = NULL;
	int outLen = 0;
	Go2cppFn_GetProgress((char *)in.data(), in.length(), &out, &outLen);
	int32_t retValue;
	int outIdx = 0;
	{
		uint32_t tmp2 = uint32_t(uint8_t(out[outIdx+0]) << 24);
		uint32_t tmp3 = uint32_t(uint8_t(out[outIdx+1]) << 16);
		uint32_t tmp4 = uint32_t(uint8_t(out[outIdx+2]) << 8);
		uint32_t tmp5 = uint32_t(uint8_t(out[outIdx+3]) << 0);
		retValue = tmp2 | tmp3 | tmp4 | tmp5;
		outIdx+=4;
	}
	if (out != NULL) {
		free(out);
	}
	return retValue;
}

std::string GetWd(){
	std::string in;
	char *out = NULL;
	int outLen = 0;
	Go2cppFn_GetWd((char *)in.data(), in.length(), &out, &outLen);
	std::string retValue;
	int outIdx = 0;
	{
		uint32_t tmp2 = 0;
		uint32_t tmp3 = uint32_t(uint8_t(out[outIdx+0]) << 24);
		uint32_t tmp4 = uint32_t(uint8_t(out[outIdx+1]) << 16);
		uint32_t tmp5 = uint32_t(uint8_t(out[outIdx+2]) << 8);
		uint32_t tmp6 = uint32_t(uint8_t(out[outIdx+3]) << 0);
		tmp2 = tmp3 | tmp4 | tmp5 | tmp6;
		outIdx+=4;
		retValue = std::string(out+outIdx, out+outIdx+tmp2);
		outIdx+=tmp2;
	}
	if (out != NULL) {
		free(out);
	}
	return retValue;
}



// Qt:
#include <QMutexLocker>
#include <QtConcurrent/QtConcurrent>

RunOnUiThread::RunOnUiThread(QObject *parent) : QObject(parent), m_done(false)
{
    // 用signal里的Qt::QueuedConnection 将多线程里面的函数转化到ui线程里调用
    connect(this, SIGNAL(signal_newFn()), this, SLOT(slot_newFn()), Qt::QueuedConnection);
}

RunOnUiThread::~RunOnUiThread()
{
    {
        QMutexLocker lk(&this->m_Mutex);
        this->m_done = true;
        this->m_funcList.clear();
    }
    this->m_pool.clear();
    this->m_pool.waitForDone();
}

void RunOnUiThread::AddRunFnOn_OtherThread(std::function<void ()> fn)
{
    QMutexLocker lk(&this->m_Mutex);
    if (this->m_done) {
        return;
    }
    QtConcurrent::run(&this->m_pool, fn);
}

void RunOnUiThread::slot_newFn()
{
    QVector<std::function<void ()>> fn_vector;
    {
        QMutexLocker lk(&this->m_Mutex);
        if (this->m_funcList.empty() || this->m_done) {
            return;
        }
        fn_vector.swap(this->m_funcList);
    }

    for(std::function<void ()>& fn : fn_vector)
    {
        bool v_done = false;
        {
            QMutexLocker lk(&this->m_Mutex);
            v_done = this->m_done;
        }
        if (v_done) { // 快速结束
            return;
        }
        fn();
    }
}

void RunOnUiThread::AddRunFnOn_UiThread(std::function<void ()> fn)
{
    {
        QMutexLocker lk(&this->m_Mutex);
        if (this->m_done) {
            return;
        }
        m_funcList.push_back(fn);
    }
    emit this->signal_newFn();
}

#include <QTimer>
#include <QLabel>
#include <QWidget>
#include <QPropertyAnimation>
#include <QPainter>
#include <QScreen>
#include <QHBoxLayout>
#include <QDesktopWidget>
#include <QApplication>

QString StringToRGBA(const QString &color);

Toast::Toast(QObject *parent) : QObject(parent)
{
    m_myWidget = new QWidget;
    m_myWidget->setFixedHeight(60);
    m_label = new QLabel;
    m_label->setFixedHeight(30);
    m_label->move(0,0);
    QFont ft;
    ft.setPointSize(10);
    m_label->setFont(ft);
    m_label->setAlignment(Qt::AlignCenter);
    m_label->setStyleSheet("color:white");
    m_myWidget->setStyleSheet("border: none;background-color:black;border-radius:10px");
    QHBoxLayout * la = new QHBoxLayout;
    la->addWidget(m_label);
    la->setContentsMargins(0,0,0,0);
    m_myWidget->setLayout(la);
    m_myWidget->hide();
    m_myWidget->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
    m_myWidget->setAttribute(Qt::WA_TranslucentBackground,true);
    m_timer = new QTimer();
    m_timer->setInterval(3000);
    connect(m_timer,SIGNAL(timeout()),this,SLOT(onTimerStayOut()));
}

Toast *Toast::Instance()
{
    static Toast instance;
    return &instance;
}

void Toast::setText(const QString &color,const QString &bgcolor,const int & mestime,const QString &text){
    QApplication::beep();
    QFontMetrics fm(m_label->font());
    int width = fm.boundingRect(text).width() + 30;
    m_myWidget->setFixedWidth(width);
    m_label->setFixedWidth(width);
    m_label->setText(text);
    QString style = QString("color:").append(StringToRGBA(color));
    m_label->setStyleSheet(style);

    m_myWidget->setStyleSheet(QString("border: none;border-radius:10px;")
                            .append("background-color:").append(StringToRGBA(bgcolor)));

    QDesktopWidget *pDesk = QApplication::desktop();
    m_myWidget->move((pDesk->width() - m_myWidget->width()) / 2, (pDesk->height() - m_myWidget->height()) / 2);
    m_myWidget->show();
    m_timer->setInterval(mestime);
    m_timer->stop();
    m_timer->start();
}

void Toast::SetError(const QString &text,const int & mestime){
     setText("FFFFFF","FF0000",mestime,text);
}

void Toast::SetSuccess(const QString &text,const int & mestime){
     setText("000000","00FF00",mestime,text);
}

void Toast::SetWaring(const QString &text,const int & mestime){
     setText("FF0000","FFFF00",mestime,text);
}

void Toast::SetTips(const QString &text,const int & mestime){
     setText("FFFFFF","0080FF",mestime,text);
}

QString StringToRGBA(const QString &color){
    int r = color.mid(0,2).toInt(nullptr,16);
    int g = color.mid(2,2).toInt(nullptr,16);
    int b = color.mid(4,2).toInt(nullptr,16);
    int a = color.length()>=8?color.mid(6,2).toInt(nullptr,16):QString("FF").toInt(nullptr,16);
    QString style = QString("rgba(").append(QString::number(r)).append(",")
            .append(QString::number(g)).append(",")
            .append(QString::number(b)).append(",")
            .append(QString::number(a))
            .append(");");
    return style;
}

void Toast::onTimerStayOut()
{
    m_timer->stop();
    m_myWidget->hide();
}
