/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeyValueSection : NSObject {
    NSString * _sectionFooter;
    NSArray * _sectionKeyValues;
    NSString * _sectionTitle;
}

@property (nonatomic, retain) NSString *sectionFooter;
@property (nonatomic, retain) NSArray *sectionKeyValues;
@property (nonatomic, retain) NSString *sectionTitle;

+ (id)sectionWithKeyValues:(id)arg1;
+ (id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3;
- (id)sectionFooter;
- (id)sectionKeyValues;
- (id)sectionTitle;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionKeyValues:(id)arg1;
- (void)setSectionTitle:(id)arg1;

@end
