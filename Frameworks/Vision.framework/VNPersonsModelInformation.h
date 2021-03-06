/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonsModelInformation : NSObject <NSCopying> {
    NSDate * _lastModificationDate;
    unsigned long long  _version;
}

@property (nonatomic, readonly, copy) NSDate *lastModificationDate;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastModificationDate;
- (unsigned long long)version;

@end
