
// MfcSample.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CwMfcSampleApp:
// このクラスの実装については、MfcSample.cpp を参照してください。
//

class CwMfcSampleApp : public CWinApp
{
public:
	CwMfcSampleApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CwMfcSampleApp theApp;