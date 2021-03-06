/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchEntity : NSObject <NSSecureCoding>

@property (readonly) bool isPeopleSearch;
@property (readonly) NSString *queryString;
@property (readonly) NSString *tokenText;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (bool)isPeopleSearch;
- (id)queryString;
- (id)tokenText;

@end
