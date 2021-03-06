/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMetadataObjectFormat : BWFormat {
    NSArray * _metadataIdentifiers;
}

+ (id)formatWithMetadataIdentifiers:(id)arg1;
+ (void)initialize;

- (id)_initWithMetadataIdentifiers:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;

@end
