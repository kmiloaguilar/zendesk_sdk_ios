/*
 *
 *  ZDKHelpCenterLastSearch.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 15/05/2015.
 *
 *  Copyright (c) 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>

/**
 *  A model for recording the last search in Help Center.
 *
 *  @since 1.3.0.1
 */
@interface ZDKHelpCenterLastSearch : NSObject


/**
 * The last search query performed.
 *
 *  @since 1.3.0.1
 */
@property (nonatomic, strong, readonly) NSString *query;


/**
 * The result count for the last search query.
 *
 *  @since 1.3.0.1
 */
@property (nonatomic, strong, readonly) NSNumber *results_count;


/**
 *  True if an article was the first viewed from a search result, false otherwise.
 *
 *  @since 1.3.1.1
 */
@property (nonatomic) BOOL uniqueSearchResultClick;


/**
 *  Create a new last search model.
 *
 *  @since 1.3.0.1
 *
 *  @param query The search query.
 *  @param count The results count.
 *
 *  @return A new instance.
 */
- (instancetype)initWithQuery:(NSString*)query resultsCount:(NSNumber*)count;


/**
 *  Get the json representation for this object.
 *
 *  @since 1.3.0.1
 *
 *  @return A dictionary with the property names as keys and property values as values.
 */
- (NSDictionary *) toJson;


/**
 *  Cache a search.
 *
 *  @since 1.3.0.1
 *
 *  @param lastSearch The search to be cached.
 */
+ (void) cacheLastSearch:(ZDKHelpCenterLastSearch*)lastSearch;


/**
 *  Un-sets the unique search result click flag
 *
 *  @since 1.3.1.1
 */
+ (void) unsetUniqueSearchResultClick;


/**
 *  Get the cached last search.
 *
 *  @since 1.3.0.1
 *
 *  @return The last search.
 */
+ (instancetype)getLastSearch;


/**
 *  Returns a dictionary representation of the last search model.
 *
 *  @since 1.3.0.1
 *
 *  @return A dictionary representation of the model.
 */
+ (NSDictionary *)getLastSearchJSON;


@end
