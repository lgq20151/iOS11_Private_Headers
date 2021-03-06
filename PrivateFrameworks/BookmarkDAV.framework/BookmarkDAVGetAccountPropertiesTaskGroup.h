/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet * _bookmarkHomes;
}

@property (nonatomic, readonly) NSSet *bookmarkHomes;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)bookmarkHomes;
- (void)dealloc;
- (id)description;
- (id)homeSet;

@end
