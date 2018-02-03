/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {
    bool  _exclusive;
    int  _pid;
    bool  _showsWhenForeground;
    int  _statusBarStyleOverrides;
    NSString * _statusString;
    NSString * _uniqueIdentifier;
}

@property (getter=isExclusive, nonatomic) bool exclusive;
@property (nonatomic) int pid;
@property (nonatomic) bool showsWhenForeground;
@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic, copy) NSString *statusString;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4 uniqueIdentifier:(id)arg5;
- (bool)isExclusive;
- (int)pid;
- (void)setExclusive:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setShowsWhenForeground:(bool)arg1;
- (void)setStatusBarStyleOverrides:(int)arg1;
- (void)setStatusString:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)showsWhenForeground;
- (int)statusBarStyleOverrides;
- (id)statusString;
- (id)uniqueIdentifier;

@end
