/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncArchiver : NSKeyedArchiver <MTCoder> {
    <SYChangeSerializer> * _serializer;
}

@property (nonatomic, retain) <SYChangeSerializer> *serializer;

- (void).cxx_destruct;
- (bool)mt_isReadingFromPersistence;
- (bool)mt_isWritingToPersistence;
- (bool)mt_isWritingToStorage;
- (id)serializer;
- (void)setSerializer:(id)arg1;

@end
