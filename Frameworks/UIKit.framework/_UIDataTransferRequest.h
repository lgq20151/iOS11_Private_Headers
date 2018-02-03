/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDataTransferRequest : NSObject <NSProgressReporting> {
    NSUUID * _UUID;
    NSItemProvider * _itemProvider;
    NSProgress * _progress;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (id)itemProvider;
- (id)progress;
- (void)setItemProvider:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setUUID:(id)arg1;

@end
