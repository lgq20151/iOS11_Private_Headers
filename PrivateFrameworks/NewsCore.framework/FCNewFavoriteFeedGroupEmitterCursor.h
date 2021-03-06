/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewFavoriteFeedGroupEmitterCursor : NSObject <NSCoding, NSCopying> {
    NSSet * _tagIDsReturned;
}

@property (nonatomic, copy) NSSet *tagIDsReturned;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTagIDsReturned:(id)arg1;
- (id)tagIDsReturned;

@end
