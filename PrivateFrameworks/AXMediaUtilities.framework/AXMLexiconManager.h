/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMLexiconManager : NSObject {
    NSMutableDictionary * _cachedLexicons;
}

- (void).cxx_destruct;
- (struct _LXLexicon { }*)_lexiconForLocale:(id)arg1;
- (const void*)_opaqueLexiconForLocale:(id)arg1;
- (id)init;
- (bool)lexiconExistsForLocale:(id)arg1;
- (bool)textExistsInLexicon:(id)arg1 withLocale:(id)arg2;

@end
