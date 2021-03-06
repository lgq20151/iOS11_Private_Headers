/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WebFilterEvaluator : NSObject <NSSecureCoding, WFPINEntryViewControllerProtocol> {
    NSMutableData * _buffer;
    id /* block */  _completion;
    unsigned long long  _filterState;
    NSString * _pageTitle;
    WFRemotePINEntryViewController * _remoteViewController;
    NSURL * _url;
}

@property (nonatomic, retain) WFRemotePINEntryViewController *remoteViewController;

+ (id)createWithResponse:(id)arg1;
+ (bool)isManagedSession;
+ (bool)supportsSecureCoding;

- (id)addData:(id)arg1;
- (void)attemptUnblockWithCompletion:(id /* block */)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (id)dataComplete;
- (void)dealloc;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (int)filterState;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)unblockWithCompletion:(id /* block */)arg1;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (bool)wasBlocked;

@end
