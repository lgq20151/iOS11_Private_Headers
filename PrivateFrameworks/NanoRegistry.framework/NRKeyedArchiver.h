/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRKeyedArchiver : NSKeyedArchiver {
    bool  _archiveSecureItems;
}

@property (nonatomic) bool archiveSecureItems;

- (bool)archiveSecureItems;
- (void)setArchiveSecureItems:(bool)arg1;

@end
