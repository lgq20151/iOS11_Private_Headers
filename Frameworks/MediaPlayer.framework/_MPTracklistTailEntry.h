/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPTracklistTailEntry : _MPTracklistProxyEntry <MPTracklistEnumerationTrackingEntry> {
    NSString * _sectionIdentifier;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (id)tailEntryWithSection:(id)arg1 branchDepth:(long long)arg2;

- (void).cxx_destruct;
- (id)sectionIdentifier;
- (id)trackingEntryResult;

@end
