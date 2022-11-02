
// MfcActionSample.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMfcActionSampleApp:
// このクラスの実装については、MfcActionSample.cpp を参照してください
//

class CMfcActionSampleApp : public CWinApp
{
public:
	CMfcActionSampleApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMfcActionSampleApp theApp;
