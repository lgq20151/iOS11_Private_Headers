/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface InterAppAudioApp : NSObject {
    UIImage * _icon;
    bool  _isCurrentApp;
    bool  _isForeground;
    bool  _isHost;
    long long  _key;
    NSString * _name;
    NSURL * _url;
    BKSApplicationStateMonitor * appMonitor;
}

@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) bool isCurrentApp;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isHost;
@property (nonatomic, readonly) long long key;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

- (void)dealloc;
- (id)description;
- (id)icon;
- (id)init:(const struct InterAppAudioAppInfo { bool x1; int x2; struct ObjCImage {} *x3; struct __CFString {} *x4; struct __CFString {} *x5; struct __CFURL {} *x6; }*)arg1 iconSize:(float)arg2;
- (bool)isCurrentApp;
- (bool)isForeground;
- (bool)isHost;
- (long long)key;
- (id)name;
- (bool)processRunningOnForeground:(int)arg1;
- (id)url;

@end
