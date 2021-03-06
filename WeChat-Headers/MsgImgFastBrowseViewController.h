//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgExt.h"
#import "MsgDataSaveLogicDelegate.h"
#import "MsgFastBrowseViewDelegate.h"
#import "MsgImgDataLogicDelegate.h"
#import "MsgImgFullScreenViewControllerDelegate.h"
#import "MsgImgFullScreenWindowDelegate.h"
#import "MultiSelectContollerDelegate.h"
#import "ViewAppMsgControllerDelegate.h"

@class CMessageWrap, MsgDataSaveLogic, MsgFastBrowseView, MsgImgDataLogic, MsgImgFullScreenWindow, MultiSelectController, NSMutableSet, NSString, UIButton, UIView, ViewAppMsgController;

@interface MsgImgFastBrowseViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgFastBrowseViewDelegate, MultiSelectContollerDelegate, MsgImgDataLogicDelegate, IMsgExt, MsgDataSaveLogicDelegate, MsgImgFullScreenViewControllerDelegate, ViewAppMsgControllerDelegate>
{
    id <MsgImgFastBrowseViewControllerDelegate> m_delegate;
    MsgFastBrowseView *m_msgFastBrowseView;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    UIView *m_filterFooterView;
    UIButton *m_forwardBtn;
    UIButton *m_favBtn;
    UIButton *m_deleteBtn;
    UIButton *m_saveBtn;
    _Bool m_bEditing;
    MultiSelectController *m_multiSelectController;
    MsgImgDataLogic *m_dataLogic;
    _Bool m_bHasLoadData;
    ViewAppMsgController *m_viewAppMsgController;
    MsgDataSaveLogic *m_MsgDataSaveLogic;
    NSMutableSet *m_arrMsgExpired;
    _Bool m_bHighlightCurrentImage;
    CMessageWrap *m_curMsgWrap;
    NSString *m_nsChatName;
    double m_scrollOffset;
}

@property(nonatomic) _Bool m_bHighlightCurrentImage; // @synthesize m_bHighlightCurrentImage;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <MsgImgFastBrowseViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)previewImage:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onForwardMessageOK;
- (void)onMultiOprationComplete;
- (id)getCurrentViewController;
- (void)viewWillPop:(_Bool)arg1;
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;
- (void)onCancel;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)initFilterFooterView;
- (void)updateFilterFooterView;
- (id)createBtnWithImg:(id)arg1 HLImg:(id)arg2 sel:(SEL)arg3;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (void)onSave;
- (void)onDel;
- (void)doDelete;
- (void)onFav;
- (void)onForward;
- (id)getSelectArray;
- (void)onEdit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateEditView;
- (void)addFilterFooterView:(id)arg1;
- (void)initView;
- (void)initNavBar;
- (id)getMsgFrom:(id)arg1;
- (void)onMsgImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

