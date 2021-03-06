/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceOpenApplicationRequest : NSObject {
    NSString * _bundleIdentifier;
    FBProcess * _clientProcess;
    FBSOpenApplicationOptions * _options;
    bool  _trusted;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) FBProcess *clientProcess;
@property (nonatomic, copy) FBSOpenApplicationOptions *options;
@property (getter=isTrusted, nonatomic) bool trusted;

+ (id)request;

- (id)bundleIdentifier;
- (id)clientProcess;
- (void)dealloc;
- (id)description;
- (bool)isTrusted;
- (id)options;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClientProcess:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTrusted:(bool)arg1;

@end
