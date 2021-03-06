/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableHistoryCategory : RadioHistoryCategory

@property (nonatomic, copy) NSString *categoryDescription;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategoryDescription:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setType:(long long)arg1;

@end
