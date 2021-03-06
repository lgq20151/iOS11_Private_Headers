/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {
    NSMutableArray * _cloudRecords;
}

@property (nonatomic, readonly) NSArray *cloudRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(bool)arg1 includeItem:(bool)arg2;
- (void)addCloudRecord:(id)arg1;
- (void)addValuesFromCloudRecordArray:(id)arg1;
- (id)allItems;
- (id)allRecordNames;
- (id)cloudRecords;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
