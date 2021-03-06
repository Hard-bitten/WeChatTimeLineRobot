/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "MMWebImageViewDelegate.h"
#import "ILinkEventExt.h"

@class MMGifView, NSString, MMUIView, StoreEmotionRewardLogicObject, EmotionRewardResponseInfo, MMWebImageView, MMUILabel, EmoticonStoreItem, RichTextView, MMUIScrollView;

@interface MMEmotionStoreRewardBegViewController : MMUIViewController <MMWebImageViewDelegate, ILinkEventExt> {
	EmoticonStoreItem* m_storeItem;
	EmotionRewardResponseInfo* m_rewardInfo;
	MMUIScrollView* m_scrollView;
	MMWebImageView* m_begRewardImage;
	MMGifView* m_loadingGif;
	MMUIView* m_priceButtonGridView;
	MMUILabel* m_choosePriceTitleLabel;
	RichTextView* m_customAmountBtn;
	StoreEmotionRewardLogicObject* m_rewardLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)onLoadImageOK:(id)ok;
-(void)onClose;
-(void)onClickCustomAmountButton;
-(void)onChoosePriceButton:(id)button;
-(float)updateCustomAmountViewFromMarginTop:(float)marginTop;
-(void)initCustomAmountView;
-(id)textForPriceButton:(id)priceButton;
-(float)updatePriceButtonGridViewFromMarginTop:(float)marginTop;
-(void)initPriceButtonGridView;
-(float)updateBegRewardImageFromMarginTop:(float)marginTop;
-(void)initBegRewardImage;
-(void)updateScrollView;
-(void)initScrollView;
-(void)initView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithStoreItem:(id)storeItem RewardInfo:(id)info;
@end

