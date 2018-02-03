/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemAccessLog : NSObject <NSCopying> {
    AVItemAccessLogInternal * _playerItemAccessLog;
}

@property (nonatomic, readonly) NSArray *events;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (void)finalize;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end
