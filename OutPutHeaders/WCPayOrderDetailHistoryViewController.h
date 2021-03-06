/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayHistoryOrderDetailViewDelegate.h"
#import "WCPayBaseViewController.h"

@class NSString;
@protocol WCPayOrderDetailHistoryViewControllerDelegate;

@interface WCPayOrderDetailHistoryViewController : WCPayBaseViewController <WCPayHistoryOrderDetailViewDelegate> {
	id<WCPayOrderDetailHistoryViewControllerDelegate> m_delegate;
	BOOL m_bShowCompleteBtn;
	BOOL m_bShowSuccessTip;
	BOOL m_bSelectedSuscribeServiceApp;
	BOOL m_bShowAppFrom;
	BOOL m_bHandlePoped;
	NSString* m_nsCompleteBtnTitle;
	NSString* m_nsCommondTip;
	int m_enWCPayHistoryOrderDetailViewScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnClickedReceiverProfile:(id)profile;
-(void)OnClickedRetrySendMessage:(id)message UserName:(id)name;
-(void)OnClickedBrandProfile:(id)profile NickName:(id)name;
-(void)setWCPayOrderDetailHistoryViewScene:(int)scene;
-(void)showBizSafeTitle:(BOOL)title;
-(void)showOrderFromApp:(BOOL)app;
-(void)showSuccessPayTip:(BOOL)tip;
-(void)showCompleteBtn:(BOOL)btn;
-(void)setCompleteBtnTitle:(id)title;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)refreshViewWithData:(id)data;
-(void)reloadTableView;
-(void)OnSubscribeApp;
-(void)selectSubscribeApp:(id)app;
-(void)initNavigationBar;
-(void)OnWXPayPhone;
-(void)OnNextStepBack;
-(void)OnHistoryOrderDetailBack;
-(void)viewDidBePoped:(BOOL)view;
-(void)BackHistoryOrderDetail;
-(void)setDelegate:(id)delegate;
-(id)init;
@end

