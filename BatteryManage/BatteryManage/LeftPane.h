#pragma once



// CLeftPane 窗体视图

class CLeftPane : public CFormView
{
	DECLARE_DYNCREATE(CLeftPane)

protected:
	CLeftPane();           // 动态创建所使用的受保护的构造函数
	virtual ~CLeftPane();

public:
	enum { IDD = IDD_LEFTPANE };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};


